//
//  SiSKeyWords+CoreDataProperties.h
//  CoreDataTest
//
//  Created by Stanly Shiyanovskiy on 19.03.17.
//  Copyright © 2017 Stanly Shiyanovskiy. All rights reserved.
//

#import "SiSKeyWords+CoreDataClass.h"


NS_ASSUME_NONNULL_BEGIN

@interface SiSKeyWords (CoreDataProperties)

+ (NSFetchRequest<SiSKeyWords *> *)fetchRequest;

@property (nullable, nonatomic, copy) NSString *keyWord;
@property (nonatomic) int16_t keyWordID;
@property (nullable, nonatomic, retain) NSSet<SiSStudent *> *student;

@end

@interface SiSKeyWords (CoreDataGeneratedAccessors)

- (void)addStudentObject:(SiSStudent *)value;
- (void)removeStudentObject:(SiSStudent *)value;
- (void)addStudent:(NSSet<SiSStudent *> *)values;
- (void)removeStudent:(NSSet<SiSStudent *> *)values;

@end

NS_ASSUME_NONNULL_END
