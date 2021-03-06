//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BMBusRoutesEntity, NSArray, NSMutableArray, NSString;

@interface BMCCBusOneRoute : NSObject
{
    NSMutableArray *_titleNameArray;
    long long _duration;
    NSString *_price;
    long long _planStatus;
    long long _planType;
    NSString *_tipLabelText;
    BMBusRoutesEntity *_busRoutesEntity;
    NSArray *_busSectionArray;
}

@property(retain, nonatomic) NSArray *busSectionArray; // @synthesize busSectionArray=_busSectionArray;
@property(retain, nonatomic) BMBusRoutesEntity *busRoutesEntity; // @synthesize busRoutesEntity=_busRoutesEntity;
@property(copy, nonatomic) NSString *tipLabelText; // @synthesize tipLabelText=_tipLabelText;
@property(nonatomic) long long planType; // @synthesize planType=_planType;
@property(nonatomic) long long planStatus; // @synthesize planStatus=_planStatus;
@property(retain, nonatomic) NSString *price; // @synthesize price=_price;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
- (void)resetDetails;
- (id)durationText;
- (id)titleName;
- (id)initWithBusRoutesEntity:(id)arg1;

@end

