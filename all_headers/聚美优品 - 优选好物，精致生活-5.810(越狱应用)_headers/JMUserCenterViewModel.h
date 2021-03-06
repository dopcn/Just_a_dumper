//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class JMUserCenterModel, NSAttributedString;

@interface JMUserCenterViewModel : NSObject
{
    _Bool _isUsingFakeData;
    _Bool _shouldShowSettingRedDot;
    JMUserCenterModel *_centerModel;
    long long _currentLimiting;
    NSAttributedString *_bannerAttributedText;
    JMUserCenterModel *_cachedCenterModel;
}

@property(retain, nonatomic) JMUserCenterModel *cachedCenterModel; // @synthesize cachedCenterModel=_cachedCenterModel;
@property(copy, nonatomic) NSAttributedString *bannerAttributedText; // @synthesize bannerAttributedText=_bannerAttributedText;
@property(nonatomic) long long currentLimiting; // @synthesize currentLimiting=_currentLimiting;
@property(nonatomic) _Bool shouldShowSettingRedDot; // @synthesize shouldShowSettingRedDot=_shouldShowSettingRedDot;
@property(nonatomic) _Bool isUsingFakeData; // @synthesize isUsingFakeData=_isUsingFakeData;
@property(retain, nonatomic) JMUserCenterModel *centerModel; // @synthesize centerModel=_centerModel;
- (void).cxx_destruct;
- (id)jm_stringByAddingAttributeString:(id)arg1 Font:(id)arg2 textColor:(id)arg3 range:(struct _NSRange)arg4;
- (id)jm_decorateAttributeString:(id)arg1 textColor:(id)arg2 font:(id)arg3 paragraphStyle:(id)arg4;
- (_Bool)jm_validateCachedResponse:(id)arg1;
- (void)fetchUserCenterSettingRedDotWithSuccess:(CDUnknownBlockType)arg1;
- (id)attributedStringForUserCenterItem:(id)arg1;
- (void)synchronizeForBrowserData;
- (void)jm_requestAdvertisingWithModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchUserCenterDataWithSuccess:(CDUnknownBlockType)arg1 ItemsLabelDataCompletion:(CDUnknownBlockType)arg2;
- (id)itemModelAtIndexPath:(id)arg1;
- (id)cellReuseIdentifierAtIndexPath:(id)arg1;
- (unsigned long long)numberOfItemInSection:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long numberOfSections;

@end

