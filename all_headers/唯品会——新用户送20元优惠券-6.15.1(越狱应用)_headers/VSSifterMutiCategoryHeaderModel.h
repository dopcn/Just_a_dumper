//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VSSifterHeaderViewModel.h"

@class NSArray, NSMutableDictionary, NSString;

@interface VSSifterMutiCategoryHeaderModel : VSSifterHeaderViewModel
{
    CDUnknownBlockType _clickCallback;
    NSMutableDictionary *_catIdDic;
    NSArray *_originCatsArr;
    NSString *_selectedSecondCatId;
}

@property(retain, nonatomic) NSString *selectedSecondCatId; // @synthesize selectedSecondCatId=_selectedSecondCatId;
@property(retain, nonatomic) NSArray *originCatsArr; // @synthesize originCatsArr=_originCatsArr;
@property(retain, nonatomic) NSMutableDictionary *catIdDic; // @synthesize catIdDic=_catIdDic;
@property(copy, nonatomic) CDUnknownBlockType clickCallback; // @synthesize clickCallback=_clickCallback;
- (void).cxx_destruct;
- (id)fetchMaxCountThirdCatId;
- (id)fetchSelectedItemsDescription;
- (id)fetchSelectedItemsId;
- (id)fetchDescription;
- (id)fetchSelectionForProductCount;
- (id)fetchSelects;
- (void)clearSelects;
- (id)fetchSelectedIdForUpdateProperties;
- (void)matchSelectedItemsWithVidArr:(id)arg1;
- (_Bool)shouldSelectSifterItemAtIndexPath:(id)arg1 collectionView:(id)arg2;
- (id)initWithSecondCategorys:(id)arg1 thirdCategory:(id)arg2;
- (id)initWithBrandCategory:(id)arg1;

@end

