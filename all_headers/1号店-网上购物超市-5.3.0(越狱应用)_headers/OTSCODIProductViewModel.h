//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OTSCheckoutCellViewModel.h"

@class NSArray;

@interface OTSCODIProductViewModel : OTSCheckoutCellViewModel
{
    NSArray *_skuList;
}

+ (id)viewModelWithSkuList:(id)arg1;
@property(retain, nonatomic) NSArray *skuList; // @synthesize skuList=_skuList;
- (void).cxx_destruct;
- (id)imageURLOfProductsForSize:(struct CGSize)arg1;
- (Class)bindingCellClass;

@end

