//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface GDTRetCodeInfo : NSObject
{
    int _resultCode;
    int _tmcost;
    int _reqsize;
    int _rspsize;
    int _type;
    NSString *_host;
    NSString *_commandid;
    NSString *_releaseversion;
}

@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) int rspsize; // @synthesize rspsize=_rspsize;
@property(nonatomic) int reqsize; // @synthesize reqsize=_reqsize;
@property(nonatomic) int tmcost; // @synthesize tmcost=_tmcost;
@property(nonatomic) int resultCode; // @synthesize resultCode=_resultCode;
@property(retain, nonatomic) NSString *releaseversion; // @synthesize releaseversion=_releaseversion;
@property(retain, nonatomic) NSString *commandid; // @synthesize commandid=_commandid;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
- (void).cxx_destruct;

@end

