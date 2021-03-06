//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, VSReputation;

@interface VSMerchandiseFirstReputationViewModel : NSObject
{
    NSString *_spuId;
    NSString *_brandId;
    NSString *_merchandiseId;
    NSString *_source;
    VSReputation *_reputation;
}

+ (id)sourceWithAccessPath:(int)arg1;
@property(retain, nonatomic) VSReputation *reputation; // @synthesize reputation=_reputation;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *merchandiseId; // @synthesize merchandiseId=_merchandiseId;
@property(retain, nonatomic) NSString *brandId; // @synthesize brandId=_brandId;
@property(retain, nonatomic) NSString *spuId; // @synthesize spuId=_spuId;
- (void).cxx_destruct;
- (void)requestReputationComplection:(CDUnknownBlockType)arg1;
- (id)initWithSpuId:(id)arg1 brandId:(id)arg2 merchandiseId:(id)arg3 source:(id)arg4;

@end

