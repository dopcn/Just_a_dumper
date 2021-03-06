//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ZKCDTrailer : NSObject
{
    unsigned long long magicNumber;
    unsigned long long thisDiskNumber;
    unsigned long long diskNumberWithStartOfCentralDirectory;
    unsigned long long numberOfCentralDirectoryEntriesOnThisDisk;
    unsigned long long totalNumberOfCentralDirectoryEntries;
    unsigned long long sizeOfCentralDirectory;
    unsigned long long offsetOfStartOfCentralDirectory;
    unsigned long long commentLength;
    NSString *comment;
}

+ (id)recordWithArchivePath:(id)arg1;
+ (id)recordWithData:(id)arg1;
+ (id)recordWithData:(id)arg1 atOffset:(unsigned long long)arg2;
@property(copy) NSString *comment; // @synthesize comment;
@property unsigned long long commentLength; // @synthesize commentLength;
@property unsigned long long offsetOfStartOfCentralDirectory; // @synthesize offsetOfStartOfCentralDirectory;
@property unsigned long long sizeOfCentralDirectory; // @synthesize sizeOfCentralDirectory;
@property unsigned long long totalNumberOfCentralDirectoryEntries; // @synthesize totalNumberOfCentralDirectoryEntries;
@property unsigned long long numberOfCentralDirectoryEntriesOnThisDisk; // @synthesize numberOfCentralDirectoryEntriesOnThisDisk;
@property unsigned long long diskNumberWithStartOfCentralDirectory; // @synthesize diskNumberWithStartOfCentralDirectory;
@property unsigned long long thisDiskNumber; // @synthesize thisDiskNumber;
@property unsigned long long magicNumber; // @synthesize magicNumber;
- (id)description;
- (_Bool)useZip64Extensions;
- (unsigned long long)length;
- (id)data;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)finalize;
- (void)removeObservers;
- (id)init;

@end

