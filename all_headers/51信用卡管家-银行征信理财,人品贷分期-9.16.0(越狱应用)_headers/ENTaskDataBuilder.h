//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ENParamsBuilder.h"

@class NSMutableDictionary, NSString;

@interface ENTaskDataBuilder : ENParamsBuilder
{
    NSMutableDictionary *_extraData;
    NSMutableDictionary *_headers;
    NSString *_startPhase;
}

@property(retain, nonatomic) NSString *startPhase; // @synthesize startPhase=_startPhase;
@property(retain, nonatomic) NSMutableDictionary *headers; // @synthesize headers=_headers;
@property(retain, nonatomic) NSMutableDictionary *extraData; // @synthesize extraData=_extraData;
- (void).cxx_destruct;
- (id)init;

@end

