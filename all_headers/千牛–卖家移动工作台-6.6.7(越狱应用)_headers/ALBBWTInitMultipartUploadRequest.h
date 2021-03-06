//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ALBBWTRequest.h"

@class NSData, NSDictionary, NSString;

@interface ALBBWTInitMultipartUploadRequest : ALBBWTRequest
{
    NSString *_dir;
    NSString *_name;
    CDUnknownBlockType _uploadProgress;
    NSData *_content;
    NSString *_localFileName;
    NSDictionary *_customMetas;
    NSDictionary *_customParms;
    NSDictionary *_extendParms;
}

@property(retain, nonatomic) NSDictionary *extendParms; // @synthesize extendParms=_extendParms;
@property(retain, nonatomic) NSDictionary *customParms; // @synthesize customParms=_customParms;
@property(retain, nonatomic) NSDictionary *customMetas; // @synthesize customMetas=_customMetas;
@property(retain, nonatomic) NSString *localFileName; // @synthesize localFileName=_localFileName;
@property(retain, nonatomic) NSData *content; // @synthesize content=_content;
@property(copy, nonatomic) CDUnknownBlockType uploadProgress; // @synthesize uploadProgress=_uploadProgress;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *dir; // @synthesize dir=_dir;
- (void).cxx_destruct;

@end

