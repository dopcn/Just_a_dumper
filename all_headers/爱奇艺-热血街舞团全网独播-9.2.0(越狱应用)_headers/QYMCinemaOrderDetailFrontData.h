//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface QYMCinemaOrderDetailFrontData : NSObject
{
    NSString *_frontPwd;
    NSString *_frontTicketId;
    NSString *_frontDesc;
}

@property(copy, nonatomic) NSString *frontDesc; // @synthesize frontDesc=_frontDesc;
@property(copy, nonatomic) NSString *frontTicketId; // @synthesize frontTicketId=_frontTicketId;
@property(copy, nonatomic) NSString *frontPwd; // @synthesize frontPwd=_frontPwd;
- (void)buildWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)dealloc;

@end

