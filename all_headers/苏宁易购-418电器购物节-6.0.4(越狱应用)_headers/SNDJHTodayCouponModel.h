//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, SNDJHGetCategoryListService;

@interface SNDJHTodayCouponModel : NSObject
{
    NSString *_categoryBackgroundColor;
    SNDJHGetCategoryListService *_getCategoryService;
}

@property(retain, nonatomic) SNDJHGetCategoryListService *getCategoryService; // @synthesize getCategoryService=_getCategoryService;
@property(retain, nonatomic) NSString *categoryBackgroundColor; // @synthesize categoryBackgroundColor=_categoryBackgroundColor;
- (void).cxx_destruct;
- (void)categoryListService:(id)arg1 data:(id)arg2 error:(id)arg3 userInfo:(id)arg4 findSimilarSwitch:(id)arg5;
- (void)requestCategoryList;

@end

