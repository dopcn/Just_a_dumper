//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LTMAOSJSONModel.h"

@class NSString;

@interface LTMJSListFileModel : LTMAOSJSONModel
{
    NSString *_path;
    NSString *_version;
    NSString *_size;
    NSString *_type;
    long long _downloadingSize;
}

@property(nonatomic) long long downloadingSize; // @synthesize downloadingSize=_downloadingSize;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;

@end

