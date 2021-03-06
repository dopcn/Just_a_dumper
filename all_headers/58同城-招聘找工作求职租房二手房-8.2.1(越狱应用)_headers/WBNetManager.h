//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol WBNetManagerDelegate;

@interface WBNetManager : NSObject
{
    id <WBNetManagerDelegate> delegate;
}

@property(nonatomic) id <WBNetManagerDelegate> delegate; // @synthesize delegate;
- (void)confirmPassword:(id)arg1 fromType:(id)arg2;
- (void)postSelectLoginTypeNotify;
- (void)requestFailed:(id)arg1 userInfo:(id)arg2;
- (void)requestFinished:(id)arg1 userInfo:(id)arg2;
- (void)handleFreshFilterCondition:(id)arg1;
- (void)getListSearchKeyTipWithCateID:(id)arg1 Key:(id)arg2;
- (void)getCateListSearchKeyTipWithCateID:(id)arg1 Key:(id)arg2;
- (void)getSearchKeyTipWithKey:(id)arg1;
- (void)getNearbyMapDataWithUrlString:(id)arg1;
- (void)loadingImageWithVersionNumber:(id)arg1 ver:(id)arg2 product:(id)arg3;
- (_Bool)isCurrentUserLogined;
- (void)dealloc;

@end

