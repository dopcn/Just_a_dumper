//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FTKFlight, FTKFlightFirstPriceCheckParameter, NSString;

@protocol FTKFlightBaseInfoProtocol <NSObject>
@property(retain, nonatomic) NSString *specialContent;
@property(retain, nonatomic) NSString *specialNotice;
@property(retain, nonatomic) NSString *notice;
@property(retain, nonatomic) FTKFlightFirstPriceCheckParameter *parameter;
@property(retain, nonatomic) NSString *delayDayString;
@property(retain, nonatomic) FTKFlight *ftkFlight;
@end

