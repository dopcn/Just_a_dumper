//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface MSFSShopSecretModel : NSObject
{
    _Bool _isSrcret;
    NSString *_secretRecommendDesc;
    NSString *_secretPimg;
    NSString *_secretRecommendUrl;
    NSString *_secretRecommendUrlType;
}

@property(retain, nonatomic) NSString *secretRecommendUrlType; // @synthesize secretRecommendUrlType=_secretRecommendUrlType;
@property(retain, nonatomic) NSString *secretRecommendUrl; // @synthesize secretRecommendUrl=_secretRecommendUrl;
@property(retain, nonatomic) NSString *secretPimg; // @synthesize secretPimg=_secretPimg;
@property(retain, nonatomic) NSString *secretRecommendDesc; // @synthesize secretRecommendDesc=_secretRecommendDesc;
@property(nonatomic) _Bool isSrcret; // @synthesize isSrcret=_isSrcret;
- (void).cxx_destruct;
- (id)initWithDic:(id)arg1;

@end

