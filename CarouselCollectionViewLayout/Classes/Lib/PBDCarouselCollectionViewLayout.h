//
//  Copyright (c) 2014 Pawel Dudek. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface PBDCarouselCollectionViewLayout : UICollectionViewLayout

@property(nonatomic) CGSize itemSize;

@property(nonatomic) CGFloat interItemSpace;
/*
 * Settings this to non-nil value will enable collection header view. Header view is laid out before first item in collection view.
 * It does not participate in centering, aka you cannot center collection view on it.
 *
 * Defaults to CGSizeZero;
 *
 */
@property(nonatomic) CGSize headerSize;

/*
 * Settings this to non-nil value will enable collection footer view. Footer view is laid out after first item in collection view.
 * It does not participate in centering, aka you cannot center collection view on it.
 *
 * Defaults to CGSizeZero;
 *
 */
@property(nonatomic) CGSize footerSize;

@end
