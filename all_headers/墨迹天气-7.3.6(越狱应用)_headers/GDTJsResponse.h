//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface GDTJsResponse : NSObject
{
    int _status;
    NSString *_callbackId;
    NSString *_messages;
}

@property(nonatomic) int status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *messages; // @synthesize messages=_messages;
@property(retain, nonatomic) NSString *callbackId; // @synthesize callbackId=_callbackId;
- (void).cxx_destruct;
- (id)ecapeString:(id)arg1;
- (id)encodedJsReponse;

@end

