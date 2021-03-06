//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray;

@interface CDGlobalSearchProductsBaseClass : NSObject <NSCoding, NSCopying>
{
    _Bool _hasMore;
    double _pageNum;
    double _orderType;
    NSArray *_goodsList;
    double _pageSize;
}

+ (id)modelObjectWithDictionary:(id)arg1;
@property(nonatomic) double pageSize; // @synthesize pageSize=_pageSize;
@property(retain, nonatomic) NSArray *goodsList; // @synthesize goodsList=_goodsList;
@property(nonatomic) double orderType; // @synthesize orderType=_orderType;
@property(nonatomic) double pageNum; // @synthesize pageNum=_pageNum;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)objectOrNilForKey:(id)arg1 fromDictionary:(id)arg2;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;

@end

