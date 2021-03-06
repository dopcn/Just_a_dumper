//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TTOnlineResModelProtocol-Protocol.h"

@class NSString;

@interface MapleStoryDataModel : NSObject <TTOnlineResModelProtocol>
{
    NSString *_documentPath;
    NSString *_documentDest;
    unsigned char _detailType;
    int _resType;
    NSString *_sid;
    NSString *_url;
    long long _miniSptVersion;
    NSString *_subCateogoryID;
    double _progress;
    long long _isDownloaded;
    unsigned long long _itemType;
}

@property(nonatomic) unsigned long long itemType; // @synthesize itemType=_itemType;
@property(nonatomic) long long isDownloaded; // @synthesize isDownloaded=_isDownloaded;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(readonly, copy, nonatomic) NSString *subCateogoryID; // @synthesize subCateogoryID=_subCateogoryID;
@property(nonatomic) unsigned char detailType; // @synthesize detailType=_detailType;
@property(nonatomic) long long miniSptVersion; // @synthesize miniSptVersion=_miniSptVersion;
@property(nonatomic) int resType; // @synthesize resType=_resType;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *sid; // @synthesize sid=_sid;
- (void).cxx_destruct;
- (_Bool)hadBeenDownloaded;
- (id)getDocumentPath;
- (id)getDocumentDest;
- (_Bool)couldBeDownload;
- (id)getSidWithMapleStoryState:(id)arg1 itemType:(unsigned long long)arg2;
- (id)getHTTPPrefixWithURL:(id)arg1;
- (long long)setItemTypeWithSid:(id)arg1;
- (id)initWithState:(id)arg1 itemType:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

