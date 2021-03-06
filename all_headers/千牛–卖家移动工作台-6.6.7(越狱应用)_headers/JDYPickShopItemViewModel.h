//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDYMUSBObject.h"

#import "JDYContextDataSourceDelegate-Protocol.h"

@class NSString;

@interface JDYPickShopItemViewModel : JDYMUSBObject <JDYContextDataSourceDelegate>
{
    NSString *_usernick;
}

@property(retain, nonatomic) NSString *usernick; // @synthesize usernick=_usernick;
- (void).cxx_destruct;
- (void)asyncRequestInventoryWithParam:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)asyncSearchInventoryWithSellerCids:(id)arg1 pageNumber:(unsigned long long)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)asyncSearchInventoryWithKeyword:(id)arg1 pageNumber:(unsigned long long)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)asyncRequestInventoryWithPageNumber:(unsigned long long)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)asyncRequestCategoriesOfSeller:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)asyncRequestOnSaleItemsWithParam:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)asyncRequestOnSaleItemsOrderedBy:(id)arg1 pageNumber:(unsigned long long)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)asyncRequestSystemRecommendedItemsWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)asyncSearchOnSaleItemsWithSellerCids:(id)arg1 pageNumber:(unsigned long long)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)asyncSearchOnSaleItemsWithKeyword:(id)arg1 pageNumber:(unsigned long long)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)asyncRequestOnSaleItemsWithType:(long long)arg1 pageNumber:(unsigned long long)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)asyncRequestOnSaleItemsWithType:(long long)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

