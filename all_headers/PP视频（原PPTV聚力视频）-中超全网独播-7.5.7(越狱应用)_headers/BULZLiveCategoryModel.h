//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "PCModuleInfo-Protocol.h"
#import "PCModuleJump-Protocol.h"

@class BULZLiveRoomModel, NSString;

@interface BULZLiveCategoryModel : NSObject <PCModuleJump, PCModuleInfo>
{
    NSString *_categoryID;
    NSString *_categoryName;
    NSString *_categroryDecs;
    NSString *_icon;
    NSString *_parternLZID;
    long long _playType;
    long long _showType;
    long long _roomCount;
    BULZLiveRoomModel *_roomModel;
    long long _target;
    NSString *_link;
    NSString *_loc;
}

@property(retain, nonatomic) NSString *loc; // @synthesize loc=_loc;
@property(retain, nonatomic) NSString *link; // @synthesize link=_link;
@property(nonatomic) long long target; // @synthesize target=_target;
@property(retain, nonatomic) BULZLiveRoomModel *roomModel; // @synthesize roomModel=_roomModel;
@property(nonatomic) long long roomCount; // @synthesize roomCount=_roomCount;
@property(nonatomic) long long showType; // @synthesize showType=_showType;
@property(nonatomic) long long playType; // @synthesize playType=_playType;
@property(retain, nonatomic) NSString *parternLZID; // @synthesize parternLZID=_parternLZID;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *categroryDecs; // @synthesize categroryDecs=_categroryDecs;
@property(retain, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
@property(retain, nonatomic) NSString *categoryID; // @synthesize categoryID=_categoryID;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)updateWithInfo:(id)arg1;
- (void)configInfo:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1 inModule:(id)arg2;
- (id)initWithDict:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) long long viewFromForDAC;

@end

