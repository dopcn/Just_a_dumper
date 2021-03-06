//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZDApi.h"

@class NSString;
@protocol Optional;

@interface ZDCourseLessonContentAppupdateinfoItem : ZDApi
{
    NSString<Optional> *_http_method;
    id <Optional> _extension;
    NSString *_updateTitle;
    NSString *_updatePosition;
    long long _needUpdate;
    NSString *_updateDesc;
    NSString *_updateUrl;
}

@property(copy, nonatomic) NSString *updateUrl; // @synthesize updateUrl=_updateUrl;
@property(copy, nonatomic) NSString *updateDesc; // @synthesize updateDesc=_updateDesc;
@property(nonatomic) long long needUpdate; // @synthesize needUpdate=_needUpdate;
@property(copy, nonatomic) NSString *updatePosition; // @synthesize updatePosition=_updatePosition;
@property(copy, nonatomic) NSString *updateTitle; // @synthesize updateTitle=_updateTitle;
@property(retain, nonatomic) id <Optional> extension; // @synthesize extension=_extension;
@property(retain, nonatomic) NSString<Optional> *http_method; // @synthesize http_method=_http_method;
- (void).cxx_destruct;

@end

