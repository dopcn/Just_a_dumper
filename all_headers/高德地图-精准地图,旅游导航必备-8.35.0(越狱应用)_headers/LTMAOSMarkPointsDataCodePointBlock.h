//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LTMAOSJSONModel.h"

@class NSArray, NSString;
@protocol LTMAOSMarkPointsDataCodePointBlockPoi;

@interface LTMAOSMarkPointsDataCodePointBlock : LTMAOSJSONModel
{
    NSString *_name;
    NSArray<LTMAOSMarkPointsDataCodePointBlockPoi> *_poilist;
    long long _poinum;
}

@property(nonatomic) long long poinum; // @synthesize poinum=_poinum;
@property(copy, nonatomic) NSArray<LTMAOSMarkPointsDataCodePointBlockPoi> *poilist; // @synthesize poilist=_poilist;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

