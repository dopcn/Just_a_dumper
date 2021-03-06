//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YYModel-Protocol.h"

@class NSString;
@protocol Optional;

@interface VSTrialApplyBrandInfo : NSObject <YYModel>
{
    NSString<Optional> *_brandStoreName;
    NSString<Optional> *_brandLogoUrl;
    NSString<Optional> *_brandSn;
    NSString<Optional> *_seoDescription;
    NSString<Optional> *_brandId;
}

@property(retain, nonatomic) NSString<Optional> *brandId; // @synthesize brandId=_brandId;
@property(retain, nonatomic) NSString<Optional> *seoDescription; // @synthesize seoDescription=_seoDescription;
@property(retain, nonatomic) NSString<Optional> *brandSn; // @synthesize brandSn=_brandSn;
@property(retain, nonatomic) NSString<Optional> *brandLogoUrl; // @synthesize brandLogoUrl=_brandLogoUrl;
@property(retain, nonatomic) NSString<Optional> *brandStoreName; // @synthesize brandStoreName=_brandStoreName;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

