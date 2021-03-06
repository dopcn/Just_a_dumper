//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface ModuleViewDataModel : NSObject
{
    _Bool _isDisplay;
    long long _mID;
    NSString *_mTitle;
    NSString *_mType;
    long long _viewID;
    NSArray *_expands;
    NSString *_text;
    unsigned long long _playway;
    NSString *_link;
}

@property(copy, nonatomic) NSString *link; // @synthesize link=_link;
@property(nonatomic) unsigned long long playway; // @synthesize playway=_playway;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSArray *expands; // @synthesize expands=_expands;
@property(nonatomic) _Bool isDisplay; // @synthesize isDisplay=_isDisplay;
@property(nonatomic) long long viewID; // @synthesize viewID=_viewID;
@property(copy, nonatomic) NSString *mType; // @synthesize mType=_mType;
@property(copy, nonatomic) NSString *mTitle; // @synthesize mTitle=_mTitle;
@property(nonatomic) long long mID; // @synthesize mID=_mID;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1;

@end

