//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface QPlayAutoDiscoverInfo : NSObject
{
    int _DataPort;
    int _CommandPort;
    int _ResultPort;
    NSString *_IP;
    NSString *_Name;
    NSString *_Type;
    NSString *_Brand;
    NSString *_ID;
}

@property(retain, nonatomic) NSString *ID; // @synthesize ID=_ID;
@property(retain, nonatomic) NSString *Brand; // @synthesize Brand=_Brand;
@property(retain, nonatomic) NSString *Type; // @synthesize Type=_Type;
@property(retain, nonatomic) NSString *Name; // @synthesize Name=_Name;
@property(nonatomic) int ResultPort; // @synthesize ResultPort=_ResultPort;
@property(nonatomic) int CommandPort; // @synthesize CommandPort=_CommandPort;
@property(nonatomic) int DataPort; // @synthesize DataPort=_DataPort;
@property(retain, nonatomic) NSString *IP; // @synthesize IP=_IP;
- (void).cxx_destruct;
- (id)description;

@end

