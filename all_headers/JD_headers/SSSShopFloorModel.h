//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface SSSShopFloorModel : NSObject
{
    long long _showType;
    long long _featured;
    NSString *_floorImg;
    NSString *_operatingWord;
    NSArray *_goodsList;
    NSArray *_banners;
}

+ (id)objectClassInArray;
@property(retain, nonatomic) NSArray *banners; // @synthesize banners=_banners;
@property(retain, nonatomic) NSArray *goodsList; // @synthesize goodsList=_goodsList;
@property(copy, nonatomic) NSString *operatingWord; // @synthesize operatingWord=_operatingWord;
@property(copy, nonatomic) NSString *floorImg; // @synthesize floorImg=_floorImg;
@property(nonatomic) long long featured; // @synthesize featured=_featured;
@property(nonatomic) long long showType; // @synthesize showType=_showType;
- (void).cxx_destruct;

@end

