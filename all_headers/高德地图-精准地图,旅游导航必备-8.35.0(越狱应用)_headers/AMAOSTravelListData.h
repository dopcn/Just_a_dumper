//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMAOSBaseData.h"

#import "NSCoding-Protocol.h"

@class NSMutableArray, NSString;

@interface AMAOSTravelListData : AMAOSBaseData <NSCoding>
{
    NSString *_md5;
    NSMutableArray *_busList;
    NSMutableArray *_carList;
    NSMutableArray *_tripList;
    NSMutableArray *_toolBoxList;
    NSString *_lastRequestTime;
    NSMutableArray *_fortuneList;
    NSString *_plateNumRestrict;
    NSString *_infoRestrictl;
    NSMutableArray *_carMallList;
}

@property(retain, nonatomic) NSMutableArray *carMallList; // @synthesize carMallList=_carMallList;
@property(copy, nonatomic) NSString *infoRestrictl; // @synthesize infoRestrictl=_infoRestrictl;
@property(copy, nonatomic) NSString *plateNumRestrict; // @synthesize plateNumRestrict=_plateNumRestrict;
@property(retain, nonatomic) NSMutableArray *fortuneList; // @synthesize fortuneList=_fortuneList;
@property(retain, nonatomic) NSString *lastRequestTime; // @synthesize lastRequestTime=_lastRequestTime;
@property(retain, nonatomic) NSMutableArray *toolBoxList; // @synthesize toolBoxList=_toolBoxList;
@property(retain, nonatomic) NSMutableArray *tripList; // @synthesize tripList=_tripList;
@property(retain, nonatomic) NSMutableArray *busList; // @synthesize busList=_busList;
@property(retain, nonatomic) NSMutableArray *carList; // @synthesize carList=_carList;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

