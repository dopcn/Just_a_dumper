//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVQueryParameter.h"

@class NSString;

@interface mparam_usercheckinlist_api : NVQueryParameter
{
    NSString *_token;
    NSString *_userid;
    NSString *_start;
    NSString *_lastid;
}

@property(copy, nonatomic) NSString *lastid; // @synthesize lastid=_lastid;
@property(copy, nonatomic) NSString *start; // @synthesize start=_start;
@property(copy, nonatomic) NSString *userid; // @synthesize userid=_userid;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
- (void).cxx_destruct;

@end

