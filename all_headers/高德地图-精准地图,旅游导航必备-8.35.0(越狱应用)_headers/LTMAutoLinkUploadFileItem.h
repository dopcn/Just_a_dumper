//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LTMAOSJSONModel.h"

@class NSString;

@interface LTMAutoLinkUploadFileItem : LTMAOSJSONModel
{
    NSString *_fileType;
    NSString *_fileName;
    NSString *_version;
    long long _offset;
    long long _length;
    NSString *_md5;
}

@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(nonatomic) long long length; // @synthesize length=_length;
@property(nonatomic) long long offset; // @synthesize offset=_offset;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain, nonatomic) NSString *fileType; // @synthesize fileType=_fileType;
- (void).cxx_destruct;

@end

