//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface SNSLThemeGoodsDTO : NSObject
{
    NSString *_sugGoodsCode;
    NSString *_shopId;
    NSString *_picVersion;
    NSURL *_goodsPicture;
}

@property(copy, nonatomic) NSURL *goodsPicture; // @synthesize goodsPicture=_goodsPicture;
@property(copy, nonatomic) NSString *picVersion; // @synthesize picVersion=_picVersion;
@property(copy, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
@property(copy, nonatomic) NSString *sugGoodsCode; // @synthesize sugGoodsCode=_sugGoodsCode;
- (void).cxx_destruct;
- (void)encodeFromDictionary:(id)arg1;

@end

