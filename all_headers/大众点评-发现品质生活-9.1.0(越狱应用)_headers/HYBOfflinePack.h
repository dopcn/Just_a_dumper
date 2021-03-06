//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSString;

@interface HYBOfflinePack : MTLModel <MTLJSONSerializing>
{
    NSString *_name;
    NSString *_filename;
    NSString *_descriptionText;
    NSString *_version;
    NSString *_srcURL;
    unsigned long long _offlineZipStatus;
    long long _zipVersion;
    NSString *_prefixURL;
}

+ (id)offlineZipStatusJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *prefixURL; // @synthesize prefixURL=_prefixURL;
@property(nonatomic) long long zipVersion; // @synthesize zipVersion=_zipVersion;
@property(nonatomic) unsigned long long offlineZipStatus; // @synthesize offlineZipStatus=_offlineZipStatus;
@property(copy, nonatomic) NSString *srcURL; // @synthesize srcURL=_srcURL;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(copy, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

