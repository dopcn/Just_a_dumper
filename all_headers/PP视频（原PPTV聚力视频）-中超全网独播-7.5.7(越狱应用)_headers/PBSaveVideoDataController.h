//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PPDataController.h"

@class NSString;

@interface PBSaveVideoDataController : PPDataController
{
    NSString *_uploadID;
    NSString *_userToken;
}

@property(retain, nonatomic) NSString *userToken; // @synthesize userToken=_userToken;
@property(retain, nonatomic) NSString *uploadID; // @synthesize uploadID=_uploadID;
- (void).cxx_destruct;
- (_Bool)parseContent:(id)arg1;
- (id)createCommonArgument;
- (id)requestMethod;
- (void)requestWithUploadID:(id)arg1 title:(id)arg2 userName:(id)arg3 passportToken:(id)arg4;
- (id)requestHTTPHeaderField;
- (id)requestPath;

@end

