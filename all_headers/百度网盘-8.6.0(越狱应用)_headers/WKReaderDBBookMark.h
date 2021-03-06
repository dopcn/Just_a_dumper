//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

#import "BBAReaderBookmarkProtocol-Protocol.h"

@class NSDate, NSNumber, NSString, WKReaderDBBook;

@interface WKReaderDBBookMark : NSManagedObject <BBAReaderBookmarkProtocol>
{
}

- (long long)readingChapterIndex;
- (id)title;
- (id)initWithDefault;

// Remaining properties
@property(retain, nonatomic) WKReaderDBBook *book; // @dynamic book;
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(retain, nonatomic) NSDate *createDate; // @dynamic createDate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) WKReaderDBBook *lastReadBook; // @dynamic lastReadBook;
@property(retain, nonatomic) NSNumber *percentage; // @dynamic percentage;
@property(readonly) Class superclass;

@end

