//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QLDokiMenuDataConsistencyValidateProtocol-Protocol.h"

@class NSArray, NSDictionary, QLThemeHorizMenu, UIView;

@protocol QLThemeHorizMenuDatasource <QLDokiMenuDataConsistencyValidateProtocol>

@optional
- (UIView *)themeHorizMenu:(QLThemeHorizMenu *)arg1 viewForFooterInSection:(long long)arg2;
- (UIView *)themeHorizMenu:(QLThemeHorizMenu *)arg1 viewForHeaderInSection:(long long)arg2;
- (double)interSpaceForthemeHorizMenu:(QLThemeHorizMenu *)arg1;
- (struct UIEdgeInsets)contentInsetForThemeHorizMenu:(QLThemeHorizMenu *)arg1;
- (struct CGSize)themeHorizMenu:(QLThemeHorizMenu *)arg1 imageSizeForIndex:(unsigned long long)arg2;
- (NSDictionary *)messageInfosForThemeHorizMenu:(QLThemeHorizMenu *)arg1;
- (NSArray *)itemsForThemeHorizMenu:(QLThemeHorizMenu *)arg1;
- (unsigned long long)numberOfItemsForThemeHorizMenu:(QLThemeHorizMenu *)arg1;
@end

