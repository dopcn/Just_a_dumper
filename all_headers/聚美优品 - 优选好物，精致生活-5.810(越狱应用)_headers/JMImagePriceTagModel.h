//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface JMImagePriceTagModel : NSObject
{
    NSString *_type;
    NSString *_bgImage;
    NSString *_topTitle;
    NSString *_leftTitle;
    NSString *_middleTitle;
    NSString *_rightTitle;
    NSString *_core_desc;
    NSString *_core_price;
    long long _imgType;
}

@property(nonatomic) long long imgType; // @synthesize imgType=_imgType;
@property(retain, nonatomic) NSString *core_price; // @synthesize core_price=_core_price;
@property(retain, nonatomic) NSString *core_desc; // @synthesize core_desc=_core_desc;
@property(retain, nonatomic) NSString *rightTitle; // @synthesize rightTitle=_rightTitle;
@property(retain, nonatomic) NSString *middleTitle; // @synthesize middleTitle=_middleTitle;
@property(retain, nonatomic) NSString *leftTitle; // @synthesize leftTitle=_leftTitle;
@property(retain, nonatomic) NSString *topTitle; // @synthesize topTitle=_topTitle;
@property(retain, nonatomic) NSString *bgImage; // @synthesize bgImage=_bgImage;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

