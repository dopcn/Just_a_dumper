//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SNBFoundation/SNBObject.h>

@class NSString;

@interface SNBTradeMessage : SNBObject
{
    NSString *_messageID;
    NSString *_occurTime;
}

+ (id)snb_dynamic_property_attr_occurTimestamp;
+ (id)snb_dynamic_property_attr_url;
+ (id)snb_dynamic_property_attr_messageBody;
+ (id)snb_dynamic_property_attr_messageSummary;
+ (id)snb_dynamic_property_attr_messageTitle;
@property(copy, nonatomic) NSString *occurTime; // @synthesize occurTime=_occurTime;
@property(copy, nonatomic) NSString *messageID; // @synthesize messageID=_messageID;
- (void).cxx_destruct;

// Remaining properties
@property(copy, nonatomic) NSString *messageBody; // @dynamic messageBody;
@property(copy, nonatomic) NSString *messageSummary; // @dynamic messageSummary;
@property(copy, nonatomic) NSString *messageTitle; // @dynamic messageTitle;
@property(nonatomic) double occurTimestamp; // @dynamic occurTimestamp;
@property(copy, nonatomic) NSString *url; // @dynamic url;

@end

