//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface MAMallHotProductsData : NSObject
{
    NSString *_rowsPerPage;
    NSString *_pageNumber;
    NSString *_pageCount;
    NSArray *_rows;
    NSString *_pageIndex;
    NSString *_rowCount;
}

@property(copy, nonatomic) NSString *rowCount; // @synthesize rowCount=_rowCount;
@property(copy, nonatomic) NSString *pageIndex; // @synthesize pageIndex=_pageIndex;
@property(copy, nonatomic) NSArray *rows; // @synthesize rows=_rows;
@property(copy, nonatomic) NSString *pageCount; // @synthesize pageCount=_pageCount;
@property(copy, nonatomic) NSString *pageNumber; // @synthesize pageNumber=_pageNumber;
@property(copy, nonatomic) NSString *rowsPerPage; // @synthesize rowsPerPage=_rowsPerPage;
- (void).cxx_destruct;
- (Class)rows_Class;

@end

