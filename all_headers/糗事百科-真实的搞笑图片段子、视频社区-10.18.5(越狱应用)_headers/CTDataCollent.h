//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface CTDataCollent : NSObject
{
    NSString *_adid;
    NSString *_impid;
    NSMutableArray *_dataArray;
}

@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) NSString *impid; // @synthesize impid=_impid;
@property(retain, nonatomic) NSString *adid; // @synthesize adid=_adid;
- (void).cxx_destruct;
- (void)dealloc;
- (void)sendDataWithSuceessOrFail:(_Bool)arg1 netSuccess:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)setUrl:(id)arg1 andTime:(id)arg2 andCode:(id)arg3;
- (id)initWithAdid:(id)arg1 impid:(id)arg2;

@end

