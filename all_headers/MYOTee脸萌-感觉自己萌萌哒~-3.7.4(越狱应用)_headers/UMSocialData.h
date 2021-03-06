//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, UIImage, UMSocialExtConfig, UMSocialUrlResource;

@interface UMSocialData : NSObject
{
    NSString *_identifier;
    NSString *_title;
    _Bool _isLike;
}

+ (id)defaultData;
+ (void)openLog:(_Bool)arg1;
+ (void)setAppKey:(id)arg1;
+ (id)appKey;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSDictionary *socialAccount;
@property(retain, nonatomic) UIImage *commentImage;
@property(retain, nonatomic) id shareImage;
@property(copy, nonatomic) NSString *shareText;
@property(copy, nonatomic) NSString *commentText;
@property(retain, nonatomic) UMSocialUrlResource *urlResource;
@property(retain, nonatomic) UMSocialExtConfig *extConfig;
- (void)setSdkType:(id)arg1 version:(id)arg2;
- (long long)getNumber:(int)arg1;
- (id)initWithIdentifier:(id)arg1 withTitle:(id)arg2;
- (id)initWithIdentifier:(id)arg1;
- (void)_initWithIdentifier:(id)arg1;
@property(readonly, nonatomic) _Bool isLike; // @synthesize isLike=_isLike;
@property(readonly, nonatomic) NSString *hashIdentifier;
- (void)refresh;
- (void)dealloc;

@end

