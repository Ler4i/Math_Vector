#include <iostream>
#include "Math_Vector.h"

int main() {
	Math_Vector m_v1{ 0, 0 };
	Math_Vector m_v2{ 3, 4 };

	Math_Vector res_sum = m_v1 + m_v2;
	Math_Vector res_dif = m_v1 - m_v2;
	int res_scalar = m_v1 * m_v2;
	Math_Vector res_lambda = m_v1 * 4;

	std::cout << "The first vector: " << m_v1 << std::endl;
	std::cout << "The second vector: " << m_v2 << std::endl;
	std::cout << "Adding vectors: " << res_sum << std::endl;
	std::cout << "Vector difference: " << res_dif << std::endl;
	std::cout << "The scalar product: " << res_scalar << std::endl;
	std::cout << "Multiplication by a number: " << res_lambda << std::endl;
	std::cout << "Normalization of the vector: " << m_v1.normalization() << std::endl;

	/*std::cout << Length(m_v1) << std::endl;
	std::cout << Length(m_v2) << std::endl;*/
	//std::cout << m_v1.Length() << std::endl;

	//что-то пишу для гит хаба
	//попытка номер 2

	return 0;
}