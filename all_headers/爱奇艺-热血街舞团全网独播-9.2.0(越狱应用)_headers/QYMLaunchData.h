//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface QYMLaunchData : NSObject
{
    NSString *_orderid;
    NSString *_movieid;
    NSString *_cinemaid;
    NSString *_partnerid;
    NSString *_moviename;
    NSString *_cinemaname;
}

@property(copy, nonatomic) NSString *cinemaname; // @synthesize cinemaname=_cinemaname;
@property(copy, nonatomic) NSString *moviename; // @synthesize moviename=_moviename;
@property(copy, nonatomic) NSString *partnerid; // @synthesize partnerid=_partnerid;
@property(copy, nonatomic) NSString *cinemaid; // @synthesize cinemaid=_cinemaid;
@property(copy, nonatomic) NSString *movieid; // @synthesize movieid=_movieid;
@property(copy, nonatomic) NSString *orderid; // @synthesize orderid=_orderid;
- (void)buildWithLaunchString:(id)arg1;
- (id)initWithLaunchString:(id)arg1;
- (void)dealloc;

@end

