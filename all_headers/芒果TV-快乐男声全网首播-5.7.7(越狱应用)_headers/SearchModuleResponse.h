//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NewJsonData.h"

@class NSNumber, SearchModuleResponseData;

@interface SearchModuleResponse : NewJsonData
{
    NSNumber *_serverTime;
    SearchModuleResponseData *_data;
}

+ (id)keyMapper;
@property(retain, nonatomic) SearchModuleResponseData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSNumber *serverTime; // @synthesize serverTime=_serverTime;
- (void).cxx_destruct;

@end

