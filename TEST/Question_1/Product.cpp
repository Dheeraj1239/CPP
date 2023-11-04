#include "Product.h"

Product::Product(std::string _productId, ProductType _productType, float _productPrice, std::string _productBrand)
: _productId(_productId), _productType(_productType),_productPrice(_productPrice),_productBrand(_productBrand)
{
}