//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MCOPSpec : NSObject
{
    _Bool selected;
    long long specid;
    NSString *specname;
    double specprice;
    long long ownercount;
    NSString *pricescope;
}

@property(nonatomic) _Bool selected; // @synthesize selected;
@property(retain, nonatomic) NSString *pricescope; // @synthesize pricescope;
@property(nonatomic) long long ownercount; // @synthesize ownercount;
@property(nonatomic) double specprice; // @synthesize specprice;
@property(retain, nonatomic) NSString *specname; // @synthesize specname;
@property(nonatomic) long long specid; // @synthesize specid;
- (void).cxx_destruct;

@end

