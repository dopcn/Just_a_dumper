//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface PurchaseRecordItem : NSObject
{
    NSString *_recordItemId;
    NSString *_accountId;
    unsigned long long _price;
    unsigned long long _useBeanVoucher;
    unsigned long long _useVoucher;
    unsigned long long _useCurrency;
    NSString *_type;
    NSString *_created;
    NSString *_bookId;
    NSString *_bookName;
    NSString *_chapterTitle;
    NSArray *_recordArr;
}

@property(retain, nonatomic) NSArray *recordArr; // @synthesize recordArr=_recordArr;
@property(retain, nonatomic) NSString *chapterTitle; // @synthesize chapterTitle=_chapterTitle;
@property(retain, nonatomic) NSString *bookName; // @synthesize bookName=_bookName;
@property(retain, nonatomic) NSString *bookId; // @synthesize bookId=_bookId;
@property(retain, nonatomic) NSString *created; // @synthesize created=_created;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) unsigned long long useCurrency; // @synthesize useCurrency=_useCurrency;
@property(nonatomic) unsigned long long useVoucher; // @synthesize useVoucher=_useVoucher;
@property(nonatomic) unsigned long long useBeanVoucher; // @synthesize useBeanVoucher=_useBeanVoucher;
@property(nonatomic) unsigned long long price; // @synthesize price=_price;
@property(retain, nonatomic) NSString *accountId; // @synthesize accountId=_accountId;
@property(retain, nonatomic) NSString *recordItemId; // @synthesize recordItemId=_recordItemId;
- (void).cxx_destruct;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)initWithDictionary:(id)arg1;

@end

