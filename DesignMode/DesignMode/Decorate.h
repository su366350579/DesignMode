#pragma once
#include <iostream>
using namespace std;
namespace DesignMode {
	class LightLine {

	public:
		virtual void Draw() {};
	};

	class DirctLightLine: public LightLine {

	public:
		virtual void Draw() {
			cout << "DirctLightLine::Draw" << endl;
		};
	};

	class SpotLightLine : public LightLine {

	public:
		virtual void Draw() {
			cout << "SpotLightLine::Draw" << endl;
		};
	};

	class LightLineDecorate {
		
	protected:
		LightLine* m_lightLine;
	public:
		LightLineDecorate(LightLine* lightLine) {
			m_lightLine = lightLine;
		}

		virtual void Draw() {
			m_lightLine->Draw();
		};
	};

	class MultiLightLineDecorator : LightLineDecorate {

	public:
		MultiLightLineDecorator(LightLine* decoratedShape) : LightLineDecorate(decoratedShape)
		{
		}

		virtual void Draw() {
			m_lightLine->Draw();
			//do something other
			SetRenderNum(2);	
		}

	private:
		void SetRenderNum(int num) {
			cout << "MultiLightLineDecorator::SetRenderNum" << endl;
		}
	};
}

