//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BDWalletSchemeAppInfo, BDWalletSchemeUserInfo, NSDictionary, NSString, UIImage;

@interface BDWalletSchemePayInfo : NSObject
{
    NSString *_ordreInfo;
    NSDictionary *_parmas;
    UIImage *_bgImage;
    BDWalletSchemeUserInfo *_originAppUserInfo;
    BDWalletSchemeAppInfo *_originAppInfo;
}

@property(retain, nonatomic) BDWalletSchemeAppInfo *originAppInfo; // @synthesize originAppInfo=_originAppInfo;
@property(retain, nonatomic) BDWalletSchemeUserInfo *originAppUserInfo; // @synthesize originAppUserInfo=_originAppUserInfo;
@property(retain, nonatomic) UIImage *bgImage; // @synthesize bgImage=_bgImage;
@property(retain, nonatomic) NSDictionary *parmas; // @synthesize parmas=_parmas;
@property(retain, nonatomic) NSString *ordreInfo; // @synthesize ordreInfo=_ordreInfo;
- (void).cxx_destruct;
- (_Bool)isValidInfo;
- (id)valueForKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;

@end

