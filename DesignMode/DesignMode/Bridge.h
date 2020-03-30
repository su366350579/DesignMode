#pragma once
namespace DesignMode {
	class DrawAPI {
	public:
		virtual void drawCircle(int radius, int x, int y);
	};

	class RedCircle : public DrawAPI
	{
	public:
		virtual void drawCircle(int radius, int x, int y);
	};

	class GreenCircle : public DrawAPI
	{
	public:
		virtual void drawCircle(int radius, int x, int y);
	};

	class Shape {
	protected:
		DrawAPI* m_drawAPI;
		Shape() {};
		Shape(DrawAPI* drawAPI) {
			m_drawAPI = drawAPI;
		}
		virtual void draw() {};
	};

	class Circle : Shape {
	private:
		int m_x, m_y, m_radius;

	public:
		Circle(int x, int y, int radius, DrawAPI* drawAPI);
		void draw() {
			m_drawAPI->drawCircle(m_radius, m_x, m_y);
		}
	};
}