//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AHNetworkingFramework/AHBaseService.h>

@class NSString;

@interface TravelVideoClipGenerateTokenService : AHBaseService
{
    long long _returncode;
    long long _pk;
    NSString *_upload_url;
    NSString *_file_key;
    NSString *_token;
}

@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(copy, nonatomic) NSString *file_key; // @synthesize file_key=_file_key;
@property(copy, nonatomic) NSString *upload_url; // @synthesize upload_url=_upload_url;
@property(nonatomic) long long pk; // @synthesize pk=_pk;
@property(nonatomic) long long returncode; // @synthesize returncode=_returncode;
- (void).cxx_destruct;
- (_Bool)parseJSON:(id)arg1;
- (void)fetchTokenWithAutohomeUa:(id)arg1 netMode:(id)arg2 videoWidth:(id)arg3 videoHeight:(id)arg4;
- (id)init;

@end

