//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, TBCSearchPostItem;

@protocol TBCSearchPageDelegate <NSObject>

@optional
- (void)menuListHide;
- (void)gotoPB:(TBCSearchPostItem *)arg1;
- (NSArray *)updateHistoryCache:(NSString *)arg1 withText:(NSString *)arg2;
- (void)clearHistoryCache:(NSString *)arg1;
- (void)changeSearchBarText:(NSString *)arg1;
- (void)becomeFirstResponder;
- (void)resignFirstResponder;
@end

