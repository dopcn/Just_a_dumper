//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTOPRequest.h"

@class NSString;

@interface TMContentCollectDeleteRequestEX : MTOPRequest
{
    NSString *_contents;
    NSString *_appSource;
}

@property(retain, nonatomic) NSString *appSource; // @synthesize appSource=_appSource;
@property(retain, nonatomic) NSString *contents; // @synthesize contents=_contents;
- (void).cxx_destruct;
- (void)sendRequest;
- (id)init;

@end

