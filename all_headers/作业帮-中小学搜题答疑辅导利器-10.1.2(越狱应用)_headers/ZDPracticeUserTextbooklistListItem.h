//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZDApi.h"

@class BookinfoItem, NSString;
@protocol Optional;

@interface ZDPracticeUserTextbooklistListItem : ZDApi
{
    NSString<Optional> *_http_method;
    id <Optional> _extension;
    long long _courseId;
    NSString *_courseName;
    BookinfoItem *_bookInfo;
}

@property(retain, nonatomic) BookinfoItem *bookInfo; // @synthesize bookInfo=_bookInfo;
@property(retain, nonatomic) NSString *courseName; // @synthesize courseName=_courseName;
@property(nonatomic) long long courseId; // @synthesize courseId=_courseId;
@property(retain, nonatomic) id <Optional> extension; // @synthesize extension=_extension;
@property(retain, nonatomic) NSString<Optional> *http_method; // @synthesize http_method=_http_method;
- (void).cxx_destruct;

@end

