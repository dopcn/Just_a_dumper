//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UCJSONSerializeProtocol-Protocol.h"

@class NSArray, NSString;

@interface CartoonGetCatalogResultInfo : NSObject <UCJSONSerializeProtocol>
{
    NSArray *_rows;
    long long _total;
    long long _book_id;
}

+ (Class)getClassByPropertyName:(id)arg1;
@property(nonatomic) long long book_id; // @synthesize book_id=_book_id;
@property(nonatomic) long long total; // @synthesize total=_total;
@property(retain, nonatomic) NSArray *rows; // @synthesize rows=_rows;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

